#include "../nel_mesh_lib/calc_lm.h"
#include "nel/3d/mesh.h"

/*-------------------------------------------------------------------*/

namespace NL3D {
class CLandscape;
class CScene;
} // namespace NL3D

class CPaintLight {
public:
  // Setup the lights
  void setup(NL3D::CLandscape &landscape, NL3D::CScene &scene);

  // Build the lights
  void build(Interface &ip, INode *node = NULL);

private:
  // Array of light
  std::vector<SLightBuild> _Lights;
};

/*-------------------------------------------------------------------*/
