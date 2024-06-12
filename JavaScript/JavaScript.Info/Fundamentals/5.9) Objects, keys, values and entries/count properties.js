let user = {
    name: 'John',
    age: 30
  };
  
  
  function count(user) {
      return Object.values(user).length;
  }
  
  alert( count(user) ); // 2