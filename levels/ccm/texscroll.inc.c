void scroll_gfx_mat_ccm_dl_cozieswater_001_layer5_area1() {
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_cozieswater_001_layer5_area1);


	shift_t(mat, 13, PACK_TILESIZE(0, 7));
	shift_s(mat, 18, PACK_TILESIZE(0, 3));
	shift_t(mat, 18, PACK_TILESIZE(0, 8));

};

void scroll_ccm() {
	scroll_gfx_mat_ccm_dl_cozieswater_001_layer5_area1();
};
