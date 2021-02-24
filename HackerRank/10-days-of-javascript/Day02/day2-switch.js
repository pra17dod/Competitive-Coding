'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function getLetter(s) {
    let letter;
    // Write your code here
    var l = s[0];
    switch( true ){
        case l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u':
            letter = 'A'; break;
        
        case l == 'b' || l == 'c' || l == 'd' || l == 'f' || l == 'g':
            letter = 'B'; break;
        
        case l == 'h' || l == 'j' || l == 'k' || l == 'l' || l == 'm':
            letter = 'C'; break;
            
        default:
            letter = 'D'; break;
    }
    
    return letter;
}


function main() {
    const s = readLine();
    
    console.log(getLetter(s));
}

