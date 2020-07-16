/*
let a = parseFloat(prompt("Type the number a:"))
let b = parseFloat(prompt("Type the number b:"))
alert("A + B is equal to: " + (a + b))
*/

/*
let operation = parseInt(prompt("Choose the operation:\n -------- \n 1 = + \n 2 = - \n 3 = ÷ \n 4 = x \n --------"))
let c = parseFloat(prompt("Type the number c:"))
let d = parseFloat(prompt("Type the number d:"))

switch (operation) {
    case 1:
        alert("C + D = " + (c + d))
        break
    case 2:
        alert("C - D = " + (c - d))
        break
    case 3:
        alert("C ÷ D = " + (c / d))
        break
    case 4:
        alert("C x D = " + (c * d))
        break
    default:
        alert("Invalid operation!")    
}
*/

/*
let e = prompt("Type something: ")
let f = parseInt(prompt("Type the number of times you want to repeat the what you just typed: "))

for (let i = 1; i < f; i++) {
    alert(e)    
}
*/

/*
let array = []
array[0] = prompt("Type your name: ")
array[1] = prompt("Type your address: ")
array[2] = prompt("Type your e-mail: ")

for (let i = 0; i < 3; i++) {
    alert(array[i]) 
}
*/

/*
let object = {}
object.name = prompt("Type your name: ")
object.address = prompt("Type your address: ")
object.email = prompt("Type your e-mail: ")

for (x in object) {
    alert(object[x])
}
*/

let button = document.querySelector("#button");

button.addEventListener("click", function(){
    event.preventDefault();

    let operation = document.querySelector("#select").value;
    
    var v1 = parseFloat(document.getElementById("v1").value);
    var v2 = parseFloat(document.getElementById("v2").value);
    
    if (operation == "addition")
        var result = v1 + v2;
    else if (operation == "subtraction")
        var result = v1 - v2;
    else if (operation == "multiplication")
        var result = v1 * v2;
    else
        var result = v1 / v2;
    
    document.getElementById("result").innerHTML = result;
});