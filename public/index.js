var number = 0;
var sub;
document.addEventListener('DOMContentLoaded', init);
function init() {
    number = 0;
    sub = document.getElementById("sub");
    sub.innerText = number;
};

function clicked() { 
    console.log("CLICKED!");
    sub.innerText = ++number;
};