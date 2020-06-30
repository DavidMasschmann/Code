let spliter_numbers = document.getElementById("spliterNumbers")

setInputFilter(spliter_numbers, function(value) {
    return /^(-?\d*[.,]?\d*)+$/.test(value); });

function spliter () {
    if (this.value.length > 0) {
        array = this.value.split(',').map(Number)
        document.getElementById("result").innerText = Math.max(...array)
    }
}

spliter_numbers.addEventListener("input", spliter)