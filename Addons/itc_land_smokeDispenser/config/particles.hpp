class ITC_Land_CMSmoke {
    class LightExpSmall {
        simulation = "light";
        type = "ExploLight";
        position[] = {0, 1.3, 0};
        intensity = 0.0005;
        interval = 1;
        lifeTime = 0.8;
    };

    class SmokeCloud {
        simulation = "particles";
        type = "ITC_Land_CMSmokeCloudBigLight";
        position[] = {0, 0.6, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 2.2;
    };

    class SmokeCloudLinger {
        simulation = "particles";
        type = "ITC_Land_CMSmokeCloudBigLightSlow";
        position[] = {0, 0.6, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 30;
    };
};
