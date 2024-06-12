let salaries = {
    "John": 100,
    "Pete": 300,
    "Mary": 250
  };
  
  
  function sumSalaries(obj) {
      let sum = 0;
      for (const salary of Object.values(salaries)) {
          sum += salary;
      }
      
      return sum;
  }
  
  
  console.log( sumSalaries(salaries) ); // 650