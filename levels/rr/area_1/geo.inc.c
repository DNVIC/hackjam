#include "src/game/envfx_snow.h"

const GeoLayout rr_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -1226, -64, 628),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, -4281, -167, 2383),
			GEO_TRANSLATE_NODE(LAYER_OPAQUE, -2366, 566, -2196),
			GEO_OPEN_NODE(),
				GEO_TRANSLATE_NODE(LAYER_OPAQUE, -1973, -666, 3630),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2206, 2444, 2982, rr_dl_clouds_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2206, 2444, 2982, rr_dl_clouds_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT_DECAL, 315, -153, 0, rr_dl_decal_mesh_layer_6),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 315, -153, 0, rr_dl_main_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout rr_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_ABOVE_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, rr_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, rr_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, rr_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};