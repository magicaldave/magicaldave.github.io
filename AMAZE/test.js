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
	// handle regular non iOS 13+ devices
    }
}
