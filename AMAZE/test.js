function onClick() {
    console.log("Requesting motion permissions");
    DeviceOrientationEvent.requestPermission().then(permissionState => {
	if (permissionState === 'granted') {
	    console.log("permission granted!");
	    window.addEventListener('deviceorientation', () => {});
	}
	else {
	    console.log("Perm function failed");
	}
    });
}
