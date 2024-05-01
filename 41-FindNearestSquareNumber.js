// 41 - Find the nearest square number (CodeWars Exercise)

function findNearestSquareNumber(n) {
    // Find the square root of the given number
    const sqrt = Math.sqrt(n);

    // Round the square root to the nearest integer
    const roundedSqrt = Math.round(sqrt);

    // Calculate the square of the rounded square root
    const nearestSquare = roundedSqrt * roundedSqrt;

    return nearestSquare;
}