// inputs
let name_input = document.getElementById("name")
let weight_input = document.getElementById("weight")
let height_input = document.getElementById("height")

// html elements
let info_section = document.getElementById("info")
let info_name = document.getElementById("info_name")
let info_bmi = document.getElementById("info_bmi")
let info_status = document.getElementById("info_status")

// Input Filters
setInputFilter(weight_input, function(value) {
    return /^-?\d*[.]?\d{0,2}$/.test(value) })

setInputFilter(height_input, function(value) {
    return /^-?\d*[.]?\d{0,2}$/.test(value) })

/* ----- */

function calculateBMI (weight, height) {
    bmi = weight / (height * height)

    return bmi.toFixed(1)
}

function weight_status (bmi) {
    let status = ""

    if (bmi < 18.5) {
        status = "Underweight"
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        status = "Normal weight"
    } else if (bmi >= 25 && bmi <= 29.9) {
        status = "Overweight"
    } else {
        status = "Obesity"
    }
    return status
}

function updater (name, bmi) {
    let status = weight_status(bmi)

    info_name.innerText = name
    info_bmi.innerText = bmi
    info_status.innerText = status
}

function show () {
    updater(name_input.value, calculateBMI(weight_input.value, height_input.value))

    setTimeout(function() {
        info_section.classList.remove("fadeOut")
    }, 2500)
}

height_input.addEventListener("input", show)
weight_input.addEventListener("input", show)
