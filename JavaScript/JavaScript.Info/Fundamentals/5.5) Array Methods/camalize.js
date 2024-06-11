function camalize(str) {
    // str = str.split("-");
    // str = str.map(x => x[0].toUpperCase() + x.slice(1));
    // str = str.join("");
    return str.split("-").map(x => x[0].toUpperCase() + x.slice(1)).join("");
}


console.log(camalize("list-style-image"));
console.log(camalize("uzair-ahmad"));
console.log(camalize("i'm-learning-js"));
