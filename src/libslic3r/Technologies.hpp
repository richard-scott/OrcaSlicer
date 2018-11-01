#ifndef _technologies_h_
#define _technologies_h_

//==============
// debug techs
//==============

// Shows camera target in the 3D scene
#define ENABLE_SHOW_CAMERA_TARGET 1

//==============
// 1.42.0 techs
//==============
#define ENABLE_1_42_0 1

// Add double click on gizmo grabbers to reset transformation components to their default value
#define ENABLE_GIZMOS_RESET (1 && ENABLE_1_42_0)
// Uses a unique opengl context
#define ENABLE_USE_UNIQUE_GLCONTEXT (1 && ENABLE_1_42_0)
// New selections
#define ENABLE_EXTENDED_SELECTION (1 && ENABLE_1_42_0)
#define DISABLE_INSTANCES_SYNCH (1 && ENABLE_EXTENDED_SELECTION)
// Modified camera target behavior
#define ENABLE_MODIFIED_CAMERA_TARGET (1 && ENABLE_1_42_0)
// Add Geometry::Transformation class and use it into ModelInstance, ModelVolume and GLVolume
#define ENABLE_MODELVOLUME_TRANSFORM (1 && ENABLE_1_42_0)

#endif // _technologies_h_


