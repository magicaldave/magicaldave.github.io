let responseText;
const generateBtn = document.querySelector('.generate-btn');
generateBtn.addEventListener('click', function() {
    const xhr = new XMLHttpRequest();
    xhr.open("GET", "http://147.182.210.243:3000/generate-text", true);
    xhr.onreadystatechange = function() {
	if (xhr.readyState === XMLHttpRequest.DONE && xhr.status === 200) {
	    responseText = xhr.responseText;
	    console.log("Prompt: " + responseText);
	    const displayResponse = document.createElement('div');
	    displayResponse.innerHTML = responseText;
	    displayResponse.classList.add("prompt");
	    document.querySelector('.content').appendChild(displayResponse);
	}
    };
    const data = JSON.stringify({
	prompt: prompt,
	max_tokens: 30,
	n: 1,
 	stop: "",
	temperature: 0.5
    });
    xhr.send(data);
});
