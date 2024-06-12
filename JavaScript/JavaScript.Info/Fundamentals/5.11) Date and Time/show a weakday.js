// Write a function getWeekDay(date) to show the weekday in short format: ‘MO’, ‘TU’, ‘WE’, ‘TH’, ‘FR’, ‘SA’, ‘SU’.

let date = new Date(2012, 0, 3);  // 3 Jan 2012


function getWeakDay(date) {
    const weakDay = date.getDay();
    
    if (weakDay === 0) {
        return "SU";
    } else if (weakDay === 1) {
        return "MO";
    } else if (weakDay === 2) {
        return "TU";
    } else if (weakDay === 3) {
        return "WE";
    } else if (weakDay === 4) {
        return "TH";
    } else if (weakDay === 5) {
        return "FR";
    } else if (weakDay === 6) {
        return "SA";
    }
}

console.log( getWeakDay(date) );        // should output "TU"
