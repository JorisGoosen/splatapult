#ifndef CAMERAS_H
#define CAMERAS_H

#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>
#include <string>
#include <vector>

class Cameras
{
public:
    Cameras();

    bool ImportJson(const std::string& jsonFilename);

    const std::vector<glm::mat4>& GetCameraVec() const { return cameraVec; }
	size_t GetNumCameras() const { return cameraVec.size(); }

	void EstimateFloorPlane(glm::vec3& normalOut, glm::vec3& posOut) const;
protected:

    std::vector<glm::mat4> cameraVec;
};

#endif
