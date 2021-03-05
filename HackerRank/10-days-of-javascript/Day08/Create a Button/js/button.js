var btn = document.createElement("Button");
var count =0;
btn.innerHTML = 0;
btn.id = "btn";
btn.className = "btnStyle";
document.body.appendChild(btn);
btn.onclick = function() {
    btn.innerHTML++;
}
