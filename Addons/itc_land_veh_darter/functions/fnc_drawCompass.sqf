	/*
	* Situational Awareness Compass for AR2i
	* Author: Toadball
	*	Input: Bugger all <ANY>
	*	Output: Fuck all <ANY>
	*	Example: [] call itc_land_veh_darter_fnc_drawCompass;
	*/
	
	private _fov = call CBA_fnc_getFov select 0; 
	private _center = positionCameraToWorld [0,0,3.5];  
	// Draw North Line 
	drawIcon3D [ 
		"", 
		[1,1,1,1], 
		_center vectorAdd [0,(1*_fov),0], 
		0, 
		0, 
		0, 
		"N", 
		1, 
		0.05, 
		"PuristaMedium" 
	]; 
	drawIcon3D [ 
		"", 
		[1,1,1,1], 
		_center vectorAdd [0,(0.75*_fov),0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	];     
	drawIcon3D [ 
		"", 
		[1,1,1,1], 
		_center vectorAdd [0,(0.5*_fov),0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	]; 
	drawIcon3D [ 
		"", 
		[1,1,1,1], 
		_center vectorAdd [0,(0.25*_fov),0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	];   
	// Draw South Line 
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [0,-(1*_fov),0], 
		0, 
		0, 
		0, 
		"S", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	]; 
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [0,-(0.75*_fov),0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	];     
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [0,-(0.5*_fov),0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	]; 
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [0,-(0.25*_fov),0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	];   
	// Draw East Line 
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [(1*_fov),0,0], 
		0, 
		0, 
		0, 
		"E", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	]; 
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [(0.75*_fov),0,0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	];     
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [(0.5*_fov),0,0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	]; 
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [(0.25*_fov),0,0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	];   
	// Draw West Line 
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [-(1*_fov),0,0], 
		0, 
		0, 
		0, 
		"W", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	]; 
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [-(0.75*_fov),0,0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	];     
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [-(0.5*_fov),0,0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	]; 
	drawIcon3D [ 
		"", 
		[1,1,1,0.5], 
		_center vectorAdd [-(0.25*_fov),0,0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	];    