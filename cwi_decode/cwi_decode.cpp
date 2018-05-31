// cwi_encode.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "cwi_encode.h"
#include <evaluate_comp.h>
#include <evaluate_comp_impl.hpp>

//#include <evaluate_compression_impl.hpp>
/*struct encoder_params
{
	int num_threads;
	bool do_inter_frame;
	int gop_size;
	double exp_factor;
	int octree_bits;
	int color_bits;
	int jpeg_quality;
	int macroblock_size;
};*/
/*evaluate_compression_impl<PointT>::assign_option_values()
{
	algorithm_ = vm_["algorithm"].template as<std::string>();
	group_size_ = vm_["group_size"].template as<int>();
	K_outlier_filter_ = vm_["K_outlier_filter"].template as<int>();
	radius_ = vm_["radius"].template as<double>();
	bb_expand_factor_ = vm_["bb_expand_factor"].template as<double>();
	algorithm_ = vm_["algorithm"].template as<std::string>();
	show_statistics_ = vm_["show_statistics"].template as<bool>();
	enh_bits_ = vm_["enh_bits"].template as<int>();
	octree_bits_ = vm_["octree_bits"].template as<int>();
	color_bits_ = vm_["color_bits"].template as<int>();
	visualization_ = vm_["visualization"].template as<bool>();
	if (vm_.count("input_directories")) {
		input_directories_ = vm_["input_directories"].template as<std::vector<std::string> >();
	}
	output_directory_ = vm_["output_directory"].template as<std::string>();
	if (algorithm_ == "V2")
	{
		color_coding_type_ = vm_["color_coding_type"].template as<int>();
		macroblock_size_ = vm_["macroblock_size"].template as<int>();
		keep_centroid_ = vm_["keep_centroid"].template as<int>();
		create_scalable_ = vm_["create_scalable"].template as<bool>();
		jpeg_quality_ = vm_["jpeg_quality"].template as<int>();
		do_delta_coding_ = vm_["do_delta_coding"].template as<bool>();
		do_quality_computation_ = vm_["do_quality_computation"].template as<bool>();
		icp_on_original_ = vm_["icp_on_original"].template as<bool>();
		do_icp_color_offset_ = vm_["do_icp_color_offset"].template as<bool>();
		num_threads_ = vm_["num_threads"].template as<int>();
		intra_frame_quality_csv_ = vm_["intra_frame_quality_csv"].template as<string>();
		predictive_quality_csv_ = vm_["predictive_quality_csv"].template as<string>();
	}
}

encoder_V2_->setMacroblockSize(macroblock_size_);
*/
// This is an example of an exported variable
CWI_ENCODE_API int ncwi_encode=0;

// This is an example of an exported function.
//Sample function for Testing
CWI_ENCODE_API int fncwi_encode(void)
{
	//evaluate_compression_impl<PointXYZRGB> evaluator(argc, argv);
	//return evaluator.evaluate() == true ? 0 : -1;
}

// This is the constructor of a class that has been exported.
// see cwi_encode.h for the class definition
Ccwi_encode::Ccwi_decode()
{
    return;
}
//Final encoding function for signals
CWI_ENCODE_API int cwi_decoder(boost::shared_ptr<pcl::PointCloud<PointT> > &pointcloud, std::ostream& comp_frame)
{
	evaluate_comp_impl<PointXYZRGB> evaluator(pointcloud, comp_frame);
	return evaluator.evaluate_comp() == true ? 0 : -1;
}
