//
//  mbgl-coreConfig.h
//  mbgl
//
//  Created by shaobin on 2019/11/26.
//

#ifndef mbgl_coreConfig_h
#define mbgl_coreConfig_h

#ifndef mbgl_core_include_heatmaplayer
#define mbgl_core_include_heatmaplayer 0
#endif

/*****************************************************************
 mbgl_core_include_rasterlayer 对 hillshade有结构体依赖
 *****************************************************************/
#ifndef mbgl_core_include_hillshadelayer
#define mbgl_core_include_hillshadelayer 0
#endif

#ifndef mbgl_core_include_rasterlayer
#define mbgl_core_include_rasterlayer 0
#endif
/*****************************************************************
 *****************************************************************/

#ifndef mbgl_core_include_circlelayer
#define mbgl_core_include_circlelayer 0
#endif

#ifndef mbgl_core_include_geojson
#define mbgl_core_include_geojson 0
#endif

#endif /* mbgl_coreConfig_h */
