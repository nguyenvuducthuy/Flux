#include "Model.h"

namespace Flux {
    void Model::addMesh(const Mesh& mesh) {
        meshes.push_back(mesh);
    }

    void Model::addMaterial(const Flux::Material& material) {
        materials.push_back(material);
    }
}