let salaries = {
    "John": 100,
    "Pete": 300,
    "Mary": 250
  };
  
  
  // Create the function topSalary(salaries) that returns the name of the top-paid person.
  
  // If salaries is empty, it should return null.
  // If there are multiple top-paid persons, return any of them.
  // P.aS. Use Object.entries and destructuring to iterate over key/value pairs.
  
  function topSalary(salaries) {
      // let assume maximum salary is 0
      let maximumSalary = 0;
      // let assume no one has maximum salary
      let maximumSalaryPerson = null;
      
      for (const [name, salary] of Object.entries(salaries)) { 
          if (maximumSalary < salary) {
              maximumSalary = salary;
              maximumSalaryPerson = name;
          }
      }
      
      return maximumSalaryPerson;
  }
  
  
  let topPaidPerson = topSalary(salaries);
  console.log(topPaidPerson);
  