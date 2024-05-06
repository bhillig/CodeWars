// 45 - Total Pressure Calculation (CodeWars Exercise)

// Given the molecular mass of two molecules M1 and M2, their masses present m1 and m2 in a vessel of volume V at
// a specific temperature T, find the total pressure exerted by the molecules.

solution= (molarMass1, molarMass2, givenMass1, givenMass2, volume, temp) => {
    return (((givenMass1 / molarMass1 + givenMass2 / molarMass2) * (temp + 273.15) * 0.082) / volume);
}