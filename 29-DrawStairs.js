// 29 - Draw stairs (CodeWars Exercise)

/* 
* Given a number n, draw stairs using the letter "I", n tall and n wide, with the tallest in the top left.
* 
* I.e n = 5:
* I
*  I
*   I
*    I
*     I
* */

function drawStairs(n) {
    let res = '';
    for(let i = 0; i < n; ++i)
    {
        if (i > 0)
        {
            res += '\n';
        }
        let lineMessage = '';
        for(let j = 0; j < i; ++j)
        {
            lineMessage += ' ';
        }
        lineMessage += 'I';
        res += lineMessage;
    }
    return res;
}