namespace CalculatorDB{
    partial class Form1{
        private System.ComponentModel.IContainer components = null;
        private System.Windows.Forms.Button HistoryButton;
        

        protected override void Dispose(bool disposing){
            if (disposing && (components != null)){
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code
        private void InitializeComponent(){

            // creating buttons, textBoxes & comboBoxes as needed
            this.n1 = new System.Windows.Forms.Button();
            this.n2 = new System.Windows.Forms.Button();
            this.n3 = new System.Windows.Forms.Button();
            this.n4 = new System.Windows.Forms.Button();
            this.n5 = new System.Windows.Forms.Button();
            this.nc = new System.Windows.Forms.Button();
            this.n6 = new System.Windows.Forms.Button();
            this.n7 = new System.Windows.Forms.Button();
            this.n8 = new System.Windows.Forms.Button();
            this.n9 = new System.Windows.Forms.Button();
            this.n0 = new System.Windows.Forms.Button();
            this.nce = new System.Windows.Forms.Button();
            this.nadd = new System.Windows.Forms.Button();
            this.nsqrt = new System.Windows.Forms.Button();
            this.nequal = new System.Windows.Forms.Button();
            this.nsquare = new System.Windows.Forms.Button();
            this.ndivide = new System.Windows.Forms.Button();
            this.textBox = new System.Windows.Forms.TextBox();
            this.ndecimal = new System.Windows.Forms.Button();
            this.nsubtract = new System.Windows.Forms.Button();
            this.nmultiply = new System.Windows.Forms.Button();
            this.lcurrentOp = new System.Windows.Forms.Label();
            this.UpdateButton = new System.Windows.Forms.Button();
            this.DeleteButton = new System.Windows.Forms.Button();
            this.HistoryButton = new System.Windows.Forms.Button();
            this.components = new System.ComponentModel.Container();
            this.operandOneTextBox = new System.Windows.Forms.TextBox();
            this.operandTwoTextBox = new System.Windows.Forms.TextBox();
            this.primaryKeyTextBox = new System.Windows.Forms.TextBox();
            this.comboBoxTableSelection = new System.Windows.Forms.ComboBox();
            this.bindingSource1 = new System.Windows.Forms.BindingSource(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.bindingSource1)).BeginInit();
            this.SuspendLayout();

            // Styling the above buttons, textBoxes and ComboBox.
            this.textBox.Location = new System.Drawing.Point(12, 30);
            this.textBox.Name = "textBox";
            this.textBox.ReadOnly = true;
            this.textBox.Size = new System.Drawing.Size(275, 20);
            this.textBox.TabIndex = 0;
            this.textBox.Text = "0";
            this.textBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;

            this.n1.Location = new System.Drawing.Point(12, 190);
            this.n1.Name = "n1";
            this.n1.Size = new System.Drawing.Size(50, 50);
            this.n1.TabIndex = 1;
            this.n1.Text = "1";
            this.n1.UseVisualStyleBackColor = true;
            this.n1.Click += new System.EventHandler(this.n_click);

            this.n2.Location = new System.Drawing.Point(68, 190);
            this.n2.Name = "n2";
            this.n2.Size = new System.Drawing.Size(50, 50);
            this.n2.TabIndex = 2;
            this.n2.Text = "2";
            this.n2.UseVisualStyleBackColor = true;
            this.n2.Click += new System.EventHandler(this.n_click);

            this.n3.Location = new System.Drawing.Point(124, 190);
            this.n3.Name = "n3";
            this.n3.Size = new System.Drawing.Size(50, 50);
            this.n3.TabIndex = 3;
            this.n3.Text = "3";
            this.n3.UseVisualStyleBackColor = true;
            this.n3.Click += new System.EventHandler(this.n_click);

            this.n4.Location = new System.Drawing.Point(12, 134);
            this.n4.Name = "n4";
            this.n4.Size = new System.Drawing.Size(50, 50);
            this.n4.TabIndex = 4;
            this.n4.Text = "4";
            this.n4.UseVisualStyleBackColor = true;
            this.n4.Click += new System.EventHandler(this.n_click);

            this.n5.Location = new System.Drawing.Point(68, 134);
            this.n5.Name = "n5";
            this.n5.Size = new System.Drawing.Size(50, 50);
            this.n5.TabIndex = 5;
            this.n5.Text = "5";
            this.n5.UseVisualStyleBackColor = true;
            this.n5.Click += new System.EventHandler(this.n_click);

            this.n6.Location = new System.Drawing.Point(124, 134);
            this.n6.Name = "n6";
            this.n6.Size = new System.Drawing.Size(50, 50);
            this.n6.TabIndex = 6;
            this.n6.Text = "6";
            this.n6.UseVisualStyleBackColor = true;
            this.n6.Click += new System.EventHandler(this.n_click);

            this.n7.Location = new System.Drawing.Point(12, 78);
            this.n7.Name = "n7";
            this.n7.Size = new System.Drawing.Size(50, 50);
            this.n7.TabIndex = 7;
            this.n7.Text = "7";
            this.n7.UseVisualStyleBackColor = true;
            this.n7.Click += new System.EventHandler(this.n_click);

            this.n8.Location = new System.Drawing.Point(68, 78);
            this.n8.Name = "n8";
            this.n8.Size = new System.Drawing.Size(50, 50);
            this.n8.TabIndex = 8;
            this.n8.Text = "8";
            this.n8.UseVisualStyleBackColor = true;
            this.n8.Click += new System.EventHandler(this.n_click);

            this.n9.Location = new System.Drawing.Point(124, 78);
            this.n9.Name = "n9";
            this.n9.Size = new System.Drawing.Size(50, 50);
            this.n9.TabIndex = 9;
            this.n9.Text = "9";
            this.n9.UseVisualStyleBackColor = true;
            this.n9.Click += new System.EventHandler(this.n_click);

            this.n0.Location = new System.Drawing.Point(12, 246);
            this.n0.Name = "n0";
            this.n0.Size = new System.Drawing.Size(106, 50);
            this.n0.TabIndex = 10;
            this.n0.Text = "0";
            this.n0.UseVisualStyleBackColor = true;
            this.n0.Click += new System.EventHandler(this.n_click);

            this.ndecimal.Location = new System.Drawing.Point(124, 246);
            this.ndecimal.Name = "ndecimal";
            this.ndecimal.Size = new System.Drawing.Size(50, 50);
            this.ndecimal.TabIndex = 11;
            this.ndecimal.Text = ".";
            this.ndecimal.UseVisualStyleBackColor = true;
            this.ndecimal.Click += new System.EventHandler(this.n_click);

            this.nc.Location = new System.Drawing.Point(236, 78);
            this.nc.Name = "nc";
            this.nc.Size = new System.Drawing.Size(50, 50);
            this.nc.TabIndex = 13;
            this.nc.Text = "C";
            this.nc.UseVisualStyleBackColor = true;
            this.nc.Click += new System.EventHandler(this.nc_Click);

            this.nadd.Location = new System.Drawing.Point(180, 190);
            this.nadd.Name = "nadd";
            this.nadd.Size = new System.Drawing.Size(50, 50);
            this.nadd.TabIndex = 14;
            this.nadd.Text = "+";
            this.nadd.UseVisualStyleBackColor = true;
            this.nadd.Click += new System.EventHandler(this.op_click);

            this.nsubtract.Location = new System.Drawing.Point(180, 246);
            this.nsubtract.Name = "nsubtract";
            this.nsubtract.Size = new System.Drawing.Size(50, 50);
            this.nsubtract.TabIndex = 15;
            this.nsubtract.Text = "-";
            this.nsubtract.UseVisualStyleBackColor = true;
            this.nsubtract.Click += new System.EventHandler(this.op_click);

            this.nmultiply.Location = new System.Drawing.Point(236, 134);
            this.nmultiply.Name = "nmultiply";
            this.nmultiply.Size = new System.Drawing.Size(50, 50);
            this.nmultiply.TabIndex = 16;
            this.nmultiply.Text = "*";
            this.nmultiply.UseVisualStyleBackColor = true;
            this.nmultiply.Click += new System.EventHandler(this.op_click);
 
            this.ndivide.Location = new System.Drawing.Point(236, 190);
            this.ndivide.Name = "ndivide";
            this.ndivide.Size = new System.Drawing.Size(50, 50);
            this.ndivide.TabIndex = 17;
            this.ndivide.Text = "/";
            this.ndivide.UseVisualStyleBackColor = true;
            this.ndivide.Click += new System.EventHandler(this.op_click);

            this.nequal.Location = new System.Drawing.Point(236, 246);
            this.nequal.Name = "nequal";
            this.nequal.Size = new System.Drawing.Size(50, 50);
            this.nequal.TabIndex = 18;
            this.nequal.Text = "=";
            this.nequal.UseVisualStyleBackColor = true;
            this.nequal.Click += new System.EventHandler(this.Nequal_click);

            this.lcurrentOp.AutoSize = true;
            this.FormBorderStyle = FormBorderStyle.FixedSingle;
            this.lcurrentOp.Location = new System.Drawing.Point(12, 12);
            this.lcurrentOp.Name = "lcurrentOp";
            this.lcurrentOp.Size = new System.Drawing.Size(12, 15);
            this.lcurrentOp.TabIndex = 19;

            this.nsqrt.Location = new System.Drawing.Point(180, 134);
            this.nsqrt.Name = "nsqrt";
            this.nsqrt.Size = new System.Drawing.Size(50, 50);
            this.nsqrt.TabIndex = 20;
            this.nsqrt.Text = "√";
            this.nsqrt.UseVisualStyleBackColor = true;
            this.nsqrt.Click += new System.EventHandler(this.Sqrt_click);

            this.nsquare.Location = new System.Drawing.Point(180, 78);
            this.nsquare.Name = "nsquare";
            this.nsquare.Size = new System.Drawing.Size(50, 50);
            this.nsquare.TabIndex = 21;
            this.nsquare.Text = "x²";
            this.nsquare.UseVisualStyleBackColor = true;
            this.nsquare.Click += new System.EventHandler(this.Square_click);

            this.HistoryButton.Location = new System.Drawing.Point(12, 310);
            this.HistoryButton.Name = "History";
            this.HistoryButton.Size = new System.Drawing.Size(275, 30);
            this.HistoryButton.TabIndex = 1;
            this.HistoryButton.Text = "History";
            this.HistoryButton.UseVisualStyleBackColor = true;
            this.HistoryButton.Click += new System.EventHandler(this.HistoryButton_Click);

            this.primaryKeyTextBox.Location = new System.Drawing.Point(12, 350);
            this.primaryKeyTextBox.Size = new System.Drawing.Size(275, 20);
            this.primaryKeyTextBox.Name = "primaryKeyTextBox";
            this.primaryKeyTextBox.PlaceholderText = "Enter Serial Key";
            this.primaryKeyTextBox.TabIndex = 5;

            this.operandOneTextBox.Location = new System.Drawing.Point(12, 385);
            this.operandOneTextBox.PlaceholderText = "Enter First Number";
            this.operandOneTextBox.Name = "textBoxNumber1";
            this.operandOneTextBox.Size = new System.Drawing.Size(130, 20);
            this.operandOneTextBox.TabIndex = 6;

            this.operandTwoTextBox.Location = new System.Drawing.Point(155, 385);
            this.operandTwoTextBox.PlaceholderText = "Enter Second Number";
            this.operandTwoTextBox.Name = "textBoxNumber2";
            this.operandTwoTextBox.Size = new System.Drawing.Size(130, 20);
            this.operandTwoTextBox.TabIndex = 7;

            this.comboBoxTableSelection.FormattingEnabled = true;
            this.comboBoxTableSelection.Items.AddRange(new object[] {
                "division_result",
                "multiplication_result",
                "addition_result",
                "subtraction_result",
                "square_result",
                "squareRoot_result"
            });
            this.comboBoxTableSelection.Location = new System.Drawing.Point(12, 420);
            this.comboBoxTableSelection.Name = "comboBoxTableSelection";
            this.comboBoxTableSelection.Size = new System.Drawing.Size(275, 21);
            this.comboBoxTableSelection.TabIndex = 8;

            this.UpdateButton.Location = new System.Drawing.Point(12, 455);
            this.UpdateButton.Name = "UpdateButton";
            this.UpdateButton.Size = new System.Drawing.Size(275, 30);
            this.UpdateButton.Text = "Update";
            this.UpdateButton.UseVisualStyleBackColor = true;
            this.UpdateButton.Click += new System.EventHandler(this.UpdateButton_Click);

            this.DeleteButton.Location = new System.Drawing.Point(12, 495);
            this.DeleteButton.Name = "DeleteButton";
            this.DeleteButton.Size = new System.Drawing.Size(275, 30);
            this.DeleteButton.Text = "Delete";
            this.DeleteButton.UseVisualStyleBackColor = true;
            this.DeleteButton.Click += new System.EventHandler(this.DeleteButton_Click);

            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(300, 540); 
            this.Controls.Add(this.nsqrt);
            this.Controls.Add(this.nsquare);
            this.Controls.Add(this.lcurrentOp);
            this.Controls.Add(this.nequal);
            this.Controls.Add(this.ndivide);
            this.Controls.Add(this.nmultiply);
            this.Controls.Add(this.nsubtract);
            this.Controls.Add(this.nadd);
            this.Controls.Add(this.nc);
            this.Controls.Add(this.nce);
            this.Controls.Add(this.ndecimal);
            this.Controls.Add(this.n0);
            this.Controls.Add(this.n9);
            this.Controls.Add(this.n8);
            this.Controls.Add(this.n7);
            this.Controls.Add(this.n6);
            this.Controls.Add(this.n5);
            this.Controls.Add(this.n4);
            this.Controls.Add(this.n3);
            this.Controls.Add(this.n2);
            this.Controls.Add(this.n1);
            this.Controls.Add(this.textBox);
            this.Controls.Add(this.HistoryButton);
            this.Controls.Add(this.UpdateButton);
            this.Controls.Add(this.comboBoxTableSelection);
            this.Controls.Add(this.DeleteButton);
            this.Controls.Add(this.operandOneTextBox);
            this.Controls.Add(this.operandTwoTextBox);
            this.Controls.Add(this.primaryKeyTextBox);
            this.Name = "Form1";
            this.Text = "Calculator";
            ((System.ComponentModel.ISupportInitialize)(this.bindingSource1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox;
        private System.Windows.Forms.Button n1;
        private System.Windows.Forms.Button n2;
        private System.Windows.Forms.Button n3;
        private System.Windows.Forms.Button n4;
        private System.Windows.Forms.Button n5;
        private System.Windows.Forms.Button n6;
        private System.Windows.Forms.Button n7;
        private System.Windows.Forms.Button n8;
        private System.Windows.Forms.Button n9;
        private System.Windows.Forms.Button n0;
        private System.Windows.Forms.Button ndecimal;
        private System.Windows.Forms.Button nce;
        private System.Windows.Forms.Button nc;
        private System.Windows.Forms.Button nadd;
        private System.Windows.Forms.Button nsubtract;
        private System.Windows.Forms.Button nmultiply;
        private System.Windows.Forms.Button ndivide;
        private System.Windows.Forms.Button nequal;
        private System.Windows.Forms.Label lcurrentOp;
        private System.Windows.Forms.Button nsqrt;
        private System.Windows.Forms.Button nsquare;
        private System.Windows.Forms.Button DeleteButton;
        private System.Windows.Forms.Button UpdateButton;
        private System.Windows.Forms.TextBox primaryKeyTextBox;
        private System.Windows.Forms.TextBox operandOneTextBox;
        private System.Windows.Forms.TextBox operandTwoTextBox;
        private System.Windows.Forms.ComboBox comboBoxTableSelection;
        private System.Windows.Forms.BindingSource bindingSource1;
    }
}




