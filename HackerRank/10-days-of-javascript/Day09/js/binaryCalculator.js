function calculateVal() {
    values = document.getElementById('res').innerHTML;
    splitValues = values.match(/[* / \- +]/);
    
    operatorPos = splitValues.index;
    p = splitValues[0];
    firstVal = parseInt(values.substr(0, operatorPos), 2);
    secondVal = parseInt(values.substr(operatorPos+1, values.size), 2);
    console.log(p);
    console.log(firstVal);
    console.log(secondVal);
    if(p == '+') {
        console.log((firstVal + secondVal));
       val = (firstVal + secondVal).toString(2); 
    } else if (p == '-') {
        val = (firstVal - secondVal).toString(2);
    } else if (p == '*') {
        val = (firstVal * secondVal).toString(2);
    } else {
        val = (firstVal / secondVal).toString(2);
    }
    console.log(val);
    document.getElementById('res').innerHTML = val;
}

function addNum(p) {
    currentVal =  document.getElementById('res').innerHTML;
    newVal = currentVal + p;
    document.getElementById('res').innerHTML = newVal;
}

function clearArea() {
    document.getElementById('res').innerHTML = '';
}