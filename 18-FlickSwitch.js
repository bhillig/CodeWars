// 18 - Flick Switch (CodeWars Exercise)

/*
Create a function that always returns True/true for every item in a given list.
However, if an element is the word 'flick', switch to always returning the opposite boolean value.
*/

function flickSwitch(arr){
    let res = [];
    let currValue = true;

    for (let i = 0; i < arr.length; ++i)
    {
        if (arr[i] === 'flick')
        {
            currValue = !currValue;
        }
        res.push(currValue);
    }

    return res;
}