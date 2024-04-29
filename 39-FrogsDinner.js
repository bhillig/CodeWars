// 39 - Frog's Dinner (CodeWars Exercise)

/*

Thanks for checking out my kata - in the below problem - the highest n can be is 200.

Example summation of a number - summation of the number 5 1+2+3+4+5 = 15 summation of the number 6 1+2+3+4+5+6 = 21

You are sat with two frogs on a log, Chris and Tom. They are arguing about who ate the most flies (Poor flies, but what you going to do!). Chris says "I ate the summation of n number of flies!".

Tom replies "Take half the number you ate then round it down and work out the summation of that, that is how many I ate"!

Cat then hops onto the log looking pleased with herself "Well, I ate the summation of both your dinners combined." Loz who came late to this meeting of amphibians is very confused, he asks "So how many did each of you eat?"

Write a function called frogContest which returns a string "Chris ate {number} flies, Tom ate {number} flies and Cat ate {number} flies"
 */

function frogContest(n) {
    let chrisN = summation(n);
    let tomN = summation(Math.floor(chrisN / 2));
    let catN = summation(chrisN + tomN);

    return `Chris ate ${chrisN} flies, Tom ate ${tomN} flies and Cat ate ${catN} flies`;
}

function summation(n) {
    let sum = 0;
    for (let i = 1; i <= n; ++i)
    {
        sum += i;
    }
    return sum;
}