const bookinput = document.getElementById("bookinput");
const authorinput = document.getElementById("authorinput");
const copiesinput = document.getElementById("copiesinput");
const button = document.getElementById("addbutton");

button.addEventListener("click" , function() {
    const bookname = bookinput.value; 
    const authorname = authorinput.value;
    const copies =copiesinput.value;

    if (!bookname.trim() || !authorname.trim() || !copies.trim())
    { 
        alert("fill every box");
        return;
    }

const tablebody = document.getElementById("booklist");

const row = tablebody.insertRow();
row.insertCell().textContent = bookname.trim();
row.insertCell().textContent = authorname.trim();
row.insertCell().textContent = copies.trim();


bookinput.value = "";
authorinput.value = "";
copiesinput.value = "";

});

