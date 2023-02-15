function onClick() {
    DeviceOrientationEvent.requestPermission().then(permissionState => {
	if (permissionState === 'granted') {
	    window.addEventListener('deviceorientation', () => {});
	}
    });
    }
}
