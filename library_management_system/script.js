const bookinput = document.getElementById("bookinput");
const authorinput = document.getElementById("authorinput");
const copiesinput = document.getElementById("copiesinput");
const button = document.getElementById("addbutton");

let books = JSON.parse(localStorage.getItem("books")) || [];


const tablebody = document.getElementById("booklist");

books.forEach(function(book){
const row = tablebody.insertRow();
row.insertCell().textContent = book.name;
row.insertCell().textContent = book.author;
row.insertCell().textContent = book.copies;

});


button.addEventListener("click" , function() {
    const bookname = bookinput.value; 
    const authorname = authorinput.value;
    const copies =copiesinput.value;

    if (!bookname.trim() || !authorname.trim() || !copies.trim())
    { 
        alert("fill every box");
        return;
    }
    books.push({
        name: bookname.trim(),
        author: authorname.trim(),
        copies: copies.trim()
    });
    localStorage.setItem("books", JSON.stringify(books));

const tablebody = document.getElementById("booklist");

const row = tablebody.insertRow();
row.insertCell().textContent = bookname.trim();
row.insertCell().textContent = authorname.trim();
row.insertCell().textContent = copies.trim();


bookinput.value = "";
authorinput.value = "";
copiesinput.value = "";

});

