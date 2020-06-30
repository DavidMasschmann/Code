let spliter_ages = document.getElementById("spliterAges")
    
setInputFilter(spliter_ages, function(value) {
    return /^(-?\d*[,]?\d*)+$/.test(value); });

function spliter () {
    if (this.value.length > 0) {
        array = this.value.split(',').map(Number)

        let smaller = 0
        let bigger = 0

        array.forEach(element => {
            if (element < 18) {
                smaller++
            } else if (element > 18) {
                bigger++
            }
        });

        document.getElementById("smaller").innerText = "Menores que 18: " + smaller
        document.getElementById("bigger").innerText = "Maiores que 18: " + bigger
    }
}

spliter_ages.addEventListener("input", spliter)