function onClick() {
    // feature detect
    if (typeof DeviceOrientationEvent.requestPermission === 'function') {
	DeviceOrientationEvent.requestPermission()
            .then(permissionState => {
		if (permissionState === 'granted') {
		    window.addEventListener('deviceorientation', () => {});
		}
            })
            .catch(console.error);
    } else {
	console.log("Non-iOS 13 Device Detected!");
    }
}
