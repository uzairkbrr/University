using System;
using System.Data;
using System.Drawing;
using System.Windows.Forms;
using System.Data.OleDb;
using System.Data.SqlClient;

namespace CalculatorDB
{

    public partial class Form1 : Form
    {
        double resultValue = 0;
        string opPerformed = "";
        bool isOpPerformed = false;
        string connectionString = "Provider=SQLOLEDB.1;Password=12345;Persist Security Info=True;User ID=sa;Initial Catalog=CalculatorDB;Data Source=DESKTOP-ROCQ03T\\SQLEXPRESS";
        OleDbConnection connection;
        public Form1()
        {
            InitializeComponent();
            MaximizeBox = false;
            MinimizeBox = false;
            StartPosition = FormStartPosition.CenterScreen;
            connection = new OleDbConnection(connectionString);
        }


        private void UpdateButton_Click(object? sender, EventArgs e)
        {
            try
            {
                string tableName = comboBoxTableSelection.SelectedItem?.ToString() ?? string.Empty;
   
                string firstOperand = operandOneTextBox.Text;
                string secondOperand = operandTwoTextBox.Text;

                if (primaryKeyTextBox is null || string.IsNullOrEmpty(primaryKeyTextBox.Text))
                {
                    MessageBox.Show("Primary key is null or empty.");
                    return;
                }

                string primaryKey = primaryKeyTextBox.Text;

                if (connection.State != ConnectionState.Open)
                {
                    connection.Open();
                }

                string query = "";
                switch (tableName)
                {
                    case "division_result":
                        if (secondOperand == "0")
                        {
                            MessageBox.Show("Error: Division by zero");
                            return;
                        }
                        double divisionResult = double.Parse(firstOperand) / double.Parse(secondOperand);
                        query = $"UPDATE {tableName} SET firstNumber = {firstOperand}, secondNumber = {secondOperand}, result = {divisionResult} WHERE id = {primaryKey}";
                        break;

                    case "multiplication_result":
                        double multiplicationResult = double.Parse(firstOperand) * double.Parse(secondOperand);
                        query = $"UPDATE {tableName} SET firstNumber = {firstOperand}, secondNumber = {secondOperand}, result = {multiplicationResult} WHERE id = {primaryKey}";
                        break;

                    case "addition_result":
                        double add_result = double.Parse(firstOperand) + double.Parse(secondOperand);
                        query = $"UPDATE {tableName} SET firstNumber = {firstOperand}, secondNumber = {secondOperand}, result = {add_result} WHERE id = {primaryKey}";
                        break;
                    case "subtraction_result":
                        double sub_result = double.Parse(firstOperand) - double.Parse(secondOperand);
                        query = $"UPDATE {tableName} SET firstNumber = {firstOperand}, secondNumber = {secondOperand}, result = {sub_result} WHERE id = {primaryKey}";
                        break;
                    case "square_result":
                        double square_result = double.Parse(firstOperand) * double.Parse(firstOperand);
                        query = $"UPDATE {tableName} SET given_number = {firstOperand}, result = {square_result} WHERE id = {primaryKey}";
                        break;
                     case "squareRoot_result":
                        double squareRoot_result = double.Parse(firstOperand) * double.Parse(firstOperand);
                        query = $"UPDATE {tableName} SET given_number = {firstOperand}, result = {squareRoot_result} WHERE id = {primaryKey}";
                        break;
                    
                    default:
                        MessageBox.Show("Invalid table selected.");
                        return;
                }

                double result = 0;

                if(tableName == "squareRoot_result" || tableName == "square_result")
                {
                    using var sqlCommand = new OleDbCommand(query, connection);
                    sqlCommand.Parameters.AddWithValue("?", firstOperand);
                    sqlCommand.Parameters.AddWithValue("?", result.ToString());
                    sqlCommand.Parameters.AddWithValue("?", primaryKey);
                    MessageBox.Show($"{tableName} updated successfully.");
                }
                else  if (!string.IsNullOrEmpty(query))
                {
                    using var sqlCommand = new OleDbCommand(query, connection);
                    sqlCommand.Parameters.AddWithValue("?", firstOperand);
                    sqlCommand.Parameters.AddWithValue("?", secondOperand);
                    sqlCommand.Parameters.AddWithValue("?", result.ToString());
                    sqlCommand.Parameters.AddWithValue("?", primaryKey);
                    MessageBox.Show($"{tableName}  updated successfully.");
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Error updating the database: {ex.Message}");
            }
            finally
            {
                if (connection.State == ConnectionState.Open)
                {
                    connection.Close();
                }
            }
        }
        
        private void DeleteButton_Click(object? sender, EventArgs e)
        {
            ArgumentNullException.ThrowIfNull(sender);

            string tableName = comboBoxTableSelection.SelectedItem?.ToString() ?? string.Empty;
            if (string.IsNullOrEmpty(tableName))
            {
                MessageBox.Show("Invalid table selected.");
                return;
            } else {
                MessageBox.Show($"Table Selected: {tableName}");
            }

            string? primaryKey = primaryKeyTextBox?.Text;
            if (string.IsNullOrEmpty(primaryKey))
            {
                MessageBox.Show("Primary key is null or empty.");
                return;
            }

            string query = $"DELETE FROM {tableName} WHERE id = {primaryKey}";

            if (connection.State != ConnectionState.Open)
            {
                connection.Open();
            }

            try
            {
                using OleDbCommand command = new(query, connection);
                command.Parameters.AddWithValue("?", primaryKey);
                int rowsAffected = command.ExecuteNonQuery();
                MessageBox.Show($"{rowsAffected} row(s) deleted successfully.");
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error deleting from the database: " + ex.Message);
            }
            finally
            {
                if (connection.State == ConnectionState.Open)
                {
                    connection.Close();
                }
            }
        }


        private void n_click(object sender, EventArgs e)
        {
            if (textBox.Text == "0" || isOpPerformed)
            {
                textBox.Clear();
            }

            isOpPerformed = false;
            Button n = (Button)sender;

            if (n.Text == ".")
            {
                if (!textBox.Text.Contains("."))
                {
                    textBox.Text += n.Text;
                }
            }
            else
            {
                textBox.Text += n.Text;
            }
        }

        private void op_click(object sender, EventArgs e)
        {
            Button n = (Button)sender;
            if (resultValue != 0)
            {
                nequal.PerformClick();
                opPerformed = n.Text;
                lcurrentOp.Text = resultValue + " " + opPerformed;
                isOpPerformed = true;
            }
            else
            {
                opPerformed = n.Text;
                resultValue = double.Parse(textBox.Text);
                lcurrentOp.Text = resultValue + " " + opPerformed;
                isOpPerformed = true;
            }
        }

        private void nce_click(object sender, EventArgs e)
        {
            textBox.Text = "0";
            lcurrentOp.Text = "";
        }

        private void nc_Click(object sender, EventArgs e)
        {
            textBox.Text = "0";
            lcurrentOp.Text = "";
            resultValue = 0;
        }

        private void Sqrt_click(object sender, EventArgs e)
        {
            double number = double.Parse(textBox.Text);
            double result = Math.Sqrt(number);

            // Save result to the database
            SaveResultToDatabase(number, result, "sqrt");

            textBox.Text = result.ToString();
            lcurrentOp.Text = "";
        }

        private void Square_click(object sender, EventArgs e)
        {
            double number = double.Parse(textBox.Text);
            double result = Math.Pow(number, 2);

            // Save result to the database
            SaveResultToDatabase(number, result, "square");

            textBox.Text = result.ToString();
            lcurrentOp.Text = "";
        }

        private void Nequal_click(object sender, EventArgs e)
        {
            double secondNumber = double.Parse(textBox.Text);
            double calculatedResult = 0;
            textBox.Text = "0";

            switch (opPerformed)
            {
                case "+":
                    calculatedResult = resultValue + secondNumber;
                    break;
                case "-":
                    calculatedResult = resultValue - secondNumber;
                    break;
                case "/":
                    calculatedResult = resultValue / secondNumber;
                    break;
                case "*":
                    calculatedResult = resultValue * secondNumber;
                    break;
                default:
                    break;
            }

            // Save result to the database
            SaveResultToDatabase(resultValue, secondNumber, calculatedResult, opPerformed);

            textBox.Text = calculatedResult.ToString();
            resultValue = calculatedResult;
            lcurrentOp.Text = "";
        }


        private void SaveResultToDatabase(double number, double result, string operation)
        {
            try
            {
                using OleDbConnection connection = new OleDbConnection(connectionString);
                connection.Open();

                string query = "";
                switch (operation)
                {
                    case "sqrt":
                        query = "INSERT INTO squareRoot_result (given_number, result) VALUES (?, ?)";
                        break;
                    case "square":
                        query = "INSERT INTO square_result (given_number, result) VALUES (?, ?)";
                        break;
                    default:
                        break;
                }

                if (!string.IsNullOrEmpty(query))
                {
                    using OleDbCommand command = new OleDbCommand(query, connection);
                    command.Parameters.AddWithValue("@p1", number);
                    command.Parameters.AddWithValue("@p2", result);
                    command.ExecuteNonQuery();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error occurred: " + ex.Message);
            }
        }


        private void SaveResultToDatabase(double firstNumber, double secondNumber, double result, string operation)
        {
            try
            {
                using OleDbConnection connection = new OleDbConnection(connectionString);
                connection.Open();

                string query = "";
                switch (operation)
                {
                    case "+":
                        query = "INSERT INTO addition_result (firstNumber, secondNumber, result) VALUES (?, ?, ?)";
                        break;
                    case "-":
                        query = "INSERT INTO subtraction_result (firstNumber, secondNumber, result) VALUES (?, ?, ?)";
                        break;
                    case "/":
                        query = "INSERT INTO division_result (firstNumber, secondNumber, result) VALUES (?, ?, ?)";
                        break;
                    case "*":
                        query = "INSERT INTO multiplication_result (firstNumber, secondNumber, result) VALUES (?, ?, ?)";
                        break;
                    case "sqrt":
                        query = "INSERT INTO squareRoot_result (given_number, result) VALUES (?, ?)";
                        break;
                    case "square":
                        query = "INSERT INTO square_result (given_number, result) VALUES (?, ?)";
                        break;
                    default:
                        break;
                }

                if (!string.IsNullOrEmpty(query))
                {
                    using OleDbCommand command = new OleDbCommand(query, connection);
                    command.Parameters.AddWithValue("@p1", firstNumber);
                    if (operation != "sqrt" && operation != "square")
                    {
                        command.Parameters.AddWithValue("@p2", secondNumber);
                    }
                    command.Parameters.AddWithValue("@p3", result);
                    command.ExecuteNonQuery();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error occurred: " + ex.Message);
            }
        }

        private void Subtraction_click(object sender, EventArgs e)
        {
            opPerformed = "-";
            if (resultValue != 0)
            {
                nequal.PerformClick();
                lcurrentOp.Text = resultValue + " " + opPerformed;
                isOpPerformed = true;
            }
            else
            {
                resultValue = double.Parse(textBox.Text);
                lcurrentOp.Text = resultValue + " " + opPerformed;
                isOpPerformed = true;
            }
        }



        private void ShowHistory()
        {
            try
            {
                Form historyForm = new()
                {
                    Text = "History",
                    Size = new System.Drawing.Size(600, 500),
                    StartPosition = FormStartPosition.CenterScreen,
                };

                TabControl tabControl = new()
                {
                    Dock = DockStyle.Fill
                };

                historyForm.Controls.Add(tabControl);

                string[] operations = ["Division", "Multiplication", "Addition", "Subtraction", "Square Root", "Square"];
                string[] tableNames = ["division_result", "multiplication_result", "addition_result", "subtraction_result", "squareRoot_result", "square_result"];

                for (int i = 0; i < operations.Length; i++)
                {
                    DataGridView dataGridView = new()
                    {
                        Dock = DockStyle.Fill,
                        AutoGenerateColumns = true,
                        AllowUserToAddRows = false,
                        AllowUserToDeleteRows = false,
                        ColumnHeadersDefaultCellStyle = new DataGridViewCellStyle { Alignment = DataGridViewContentAlignment.MiddleCenter },
                        DefaultCellStyle = new DataGridViewCellStyle { Alignment = DataGridViewContentAlignment.MiddleCenter }
                    };

                    TabPage tabPage = new()
                    {
                        Text = operations[i]
                    };

                    tabPage.Controls.Add(dataGridView);
                    tabControl.TabPages.Add(tabPage);

                    DataTable dataTable = new();

                    using (OleDbDataAdapter adapter = new("SELECT * FROM " + tableNames[i], connection))
                    {
                        adapter.Fill(dataTable);
                    }

                    dataGridView.DataSource = dataTable;
                    dataGridView.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
                }

                historyForm.ShowDialog();
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error fetching data from the database: " + ex.Message);
            }
        }
        private void HistoryButton_Click(object sender, EventArgs e)
        {
            ShowHistory();
        }
    }
}

