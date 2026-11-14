const bookinput = document.getElementById("bookinput");
//const authorinput = document.getElementById("authorinput");
//const copiesinput = document.getElementById("copiesinput");
const button = document.getElementById("addbutton");
const output = document.getElementById("output");

button.addEventListener("click" , function() {
    const name = bookinput.value; 
   
    output.textContent = name;
   
    
});



