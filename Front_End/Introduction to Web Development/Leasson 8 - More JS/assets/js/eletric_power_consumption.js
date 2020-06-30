setInputFilter(document.getElementById("floatTextBox"), function(value) {
    return /^-?\d*[.]?\d*$/.test(value); });

setInputFilter(document.getElementById("currencyTextBox"), function(value) {
    return /^-?\d*[.]?\d{0,2}$/.test(value); });   

let consumption_input = document.getElementById("floatTextBox")
let price_input = document.getElementById("currencyTextBox")

function logic (){
    if (this.value.length > 0) {
        let consumption = consumption_input.value
        let price = price_input.value
        let result

        if (consumption > 100) {
            result = ((consumption * price) / 100) * 125     
        } else if (consumption > 200) {
            result = ((consumption * price) / 100) * 150    
        } else {
            result = consumption * price
        }

        document.getElementById("result").innerText = "Resultado: " +  result.toFixed(2)    
    }
}

price_input.addEventListener("input", logic)
consumption_input.addEventListener("input", logic)
