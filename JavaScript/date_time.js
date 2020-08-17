var date = new Date()
var today = date.getMonth() + 1 + "/" 
            + (date.getDate() < 10 ? "0" : "") 
            + date.getDate() + "/" + date.getFullYear()
var time = (date.getHours() < 10 ? "0" : "") 
            + (date.getHours() % 12 || 12) + ":" 
            + (date.getMinutes() < 10 ? "0" : "") + date.getMinutes() + ":" 
            + (date.getSeconds() < 10 ? "0" : "") + date.getSeconds()
console.log("Date: " + today)
console.log("Time: " + time)


// Alternative
let date_time = new Date().toLocaleString().split(", ")
console.log("\nDate: " + date_time[0])
console.log("Time: " + date_time[1])