	/*
	* Situational Awareness Compass for AR2i
	* Author: Toadball
	*	Input: Bugger all <ANY>
	*	Output: Fuck all <ANY>
	*	Example: [] call itc_land_veh_darter_fnc_drawCompass;
	*/
	
	private _fov = call CBA_fnc_getFov select 0; 
	private _center = _this select 0;
	//private _center = positionCameraToWorld [0,0,3.5];

	private _offSet1 = 0.5;
	private _offSet2 = 1;
	private _offSet3 = 1.5;
	private _offSetD = 2;
	
	// Draw North Line 
	drawIcon3D [ 
		"", 
		[1,1,1,1], 
		_center vectorAdd [0,(_offSetD*_fov),0], 
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
		_center vectorAdd [0,(_offSet3*_fov),0], 
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
		_center vectorAdd [0,(_offSet2*_fov),0], 
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
		_center vectorAdd [0,(_offSet1*_fov),0], 
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
		_center vectorAdd [0,-(_offSetD*_fov),0], 
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
		_center vectorAdd [0,-(_offSet3*_fov),0], 
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
		_center vectorAdd [0,-(_offSet2*_fov),0], 
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
		_center vectorAdd [0,-(_offSet1*_fov),0], 
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
		_center vectorAdd [(_offSetD*_fov),0,0], 
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
		_center vectorAdd [(_offSet3*_fov),0,0], 
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
		_center vectorAdd [(_offSet2*_fov),0,0], 
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
		_center vectorAdd [(_offSet1*_fov),0,0], 
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
		_center vectorAdd [-(_offSetD*_fov),0,0], 
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
		_center vectorAdd [-(_offSet3*_fov),0,0], 
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
		_center vectorAdd [-(_offSet2*_fov),0,0], 
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
		_center vectorAdd [-(_offSet1*_fov),0,0], 
		0, 
		0, 
		0, 
		".", 
		0.5, 
		0.05, 
		"PuristaMedium" 
	];    