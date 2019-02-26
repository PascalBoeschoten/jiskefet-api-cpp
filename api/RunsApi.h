/**
 * Jiskefet
 * Running with /api prefix
 *
 * OpenAPI spec version: 1.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.1.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * RunsApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_RunsApi_H_
#define IO_SWAGGER_CLIENT_API_RunsApi_H_


#include "../ApiClient.h"

#include "CreateRunDto.h"
#include "CreateRunResultDto.h"
#include "LinkLogToRunDto.h"
#include "Object.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  RunsApi
{
public:
    RunsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~RunsApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="orderBy">On which field to order on. (optional)</param>
    /// <param name="orderDirection">The order direction, either ascending or descending. (optional)</param>
    /// <param name="pageSize">The maximum amount of logs in each result. (optional, default to 25)</param>
    /// <param name="pageNumber">The current page, i.e. the offset in the result set based on pageSize. (optional, default to 1)</param>
    /// <param name="runNumber">The id of the log. (optional)</param>
    /// <param name="startTimeO2Start">The lower bound of the timeO2Start filter range. (optional)</param>
    /// <param name="endTimeO2Start">The upper bound of the timeO2Start filter range. (optional)</param>
    /// <param name="startTimeTrgStart">The lower bound of the timeTrgStart filter range. (optional)</param>
    /// <param name="endTimeTrgStart">The upper bound of the timeTrgStart filter range. (optional)</param>
    /// <param name="startTimeTrgEnd">The lower bound of the timeTrgEnd filter range. (optional)</param>
    /// <param name="endTimeTrgEnd">The upper bound of the timeTrgEnd filter range. (optional)</param>
    /// <param name="startTimeO2End">The lower bound of the timeO2End filter range. (optional)</param>
    /// <param name="endTimeO2End">The upper bound of the timeO2End filter range. (optional)</param>
    /// <param name="activityId">The id of the activity. (optional)</param>
    /// <param name="runType">The type of the run. (optional)</param>
    /// <param name="runQuality">The quality of the run. (optional)</param>
    pplx::task<std::shared_ptr<Object>> runsGet(
        boost::optional<utility::string_t> orderBy,
        boost::optional<utility::string_t> orderDirection,
        boost::optional<utility::string_t> pageSize,
        boost::optional<utility::string_t> pageNumber,
        boost::optional<utility::string_t> runNumber,
        boost::optional<utility::datetime> startTimeO2Start,
        boost::optional<utility::datetime> endTimeO2Start,
        boost::optional<utility::datetime> startTimeTrgStart,
        boost::optional<utility::datetime> endTimeTrgStart,
        boost::optional<utility::datetime> startTimeTrgEnd,
        boost::optional<utility::datetime> endTimeTrgEnd,
        boost::optional<utility::datetime> startTimeO2End,
        boost::optional<utility::datetime> endTimeO2End,
        boost::optional<utility::string_t> activityId,
        boost::optional<int32_t> runType,
        boost::optional<int32_t> runQuality
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<Object>> runsIdGet(
        int32_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="linkLogToRunDto"></param>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<Object>> runsIdLogsPatch(
        std::shared_ptr<LinkLogToRunDto> linkLogToRunDto,
        int32_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="createRunDto"></param>
    pplx::task<std::shared_ptr<CreateRunResultDto>> runsPost(
        std::shared_ptr<CreateRunDto> createRunDto
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_RunsApi_H_ */

