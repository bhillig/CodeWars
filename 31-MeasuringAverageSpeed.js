// 31 - Measuring Average Speed (CodeWars Exercise)

/* 
Speed is a crucial measure of success for any aspiring warrior, so let's write a function to calculate it.

Average Speed is calculated by dividing distance by time. Given two strings as input the first of which indicates a 
codewarrior's distance travelled (in metres or kilometres) and the second indicating the time it takes them to travel 
(in seconds or minutes), return a string indicating their speed in miles per hour rounded to the nearest integer.

For the purposes of this kata one metre per second is defined as 2.23694 miles per hour.

So for example given the input values of distance & time "3km" and "5min" we should return a speed value of "22mph".
*/

function calculateSpeed(distance, time) {

    let dist = 0;
    let t = 0;
    
    // Get distance in metres
    if (distance.includes("km"))
    {
        dist = parseInt(distance.slice(0, distance.length - 2)) * 1000;
    }
    else if (distance.includes("m"))
    {
        dist = parseInt(distance.slice(0, distance.length - 1));
    }

    // Get time in seconds
    if (time.includes("s"))
    {
        t = parseInt(time.slice(0, time.length - 1));
    }
    else if (time.includes("min"))
    {
        t = parseInt(time.slice(0, time.length - 3)) * 60;
    }

    
    // Convert m/s to mph and return
    let speed = Math.round(dist / t * 2.23694);
    return speed + 'mph';
}