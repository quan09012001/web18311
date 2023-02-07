function displayTime() {
    var date = new Date();
    var time = date.toLocaleTimeString();
    var date = date.toLocaleDateString();
    document.getElementById("date").innerHTML = time + " " + date +"&nbsp";
  }

  setInterval(displayTime, 1000);

 // <p id="date" style="color: rgb(138, 3, 3)"></p>