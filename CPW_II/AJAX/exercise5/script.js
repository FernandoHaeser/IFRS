
const br = document.createElement("br");
document.body.append(br);

const button = document.createElement("button");
button.id = "getButton";
button.textContent = "Press here to get the infos";
button.onclick = pressButton;

const responseText = document.createElement("span");
responseText.id = "responseText";
responseText.textContent = "Response: ";

const response = document.createElement("span");
response.id = "response";

document.body.appendChild(button);
document.body.append(br, br);
document.body.append(responseText, response);

let xhr = new XMLHttpRequest();

xhr.open("GET", "https://jsonplaceholder.typicode.com/todos/1", true);

function pressButton() {

    for (let i = 0; i < 10000; i++) {
        document.getElementById("response").textContent = "searching...";
    }

    xhr.onload = function () {
        if (xhr.status >= 200 && xhr.status < 300) {
            let response = JSON.parse(xhr.response);
            document.getElementById("response").textContent = response.title;
        } else {
            alert("deu caraio mermo");
        }
    }

    xhr.send();
}