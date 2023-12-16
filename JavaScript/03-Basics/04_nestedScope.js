"use strict";

function one() {
  const userName = "Uzair";
  function two() {
    const wesbite = "Youtube";
    console.log(`${userName} is using ${wesbite}`);
  }

  //   console.log(wesbite); // Not accessible

  two();
}

one();

// child can take anything from elder && elder don't
