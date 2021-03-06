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
 * UsersApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_UsersApi_H_
#define IO_SWAGGER_CLIENT_API_UsersApi_H_


#include "../ApiClient.h"

#include "CreateSubSystemPermissionDto.h"
#include "Object.h"

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  UsersApi
{
public:
    UsersApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~UsersApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<Object>> usersIdGet(
        int32_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<std::shared_ptr<Object>> usersIdTokensGet(
        int32_t id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    /// <param name="createSubSystemPermissionDto"></param>
    pplx::task<void> usersIdTokensNewPost(
        int32_t id,
        std::shared_ptr<CreateSubSystemPermissionDto> createSubSystemPermissionDto
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_UsersApi_H_ */

