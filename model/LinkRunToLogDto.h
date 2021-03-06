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
 * LinkRunToLogDto.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_LinkRunToLogDto_H_
#define IO_SWAGGER_CLIENT_MODEL_LinkRunToLogDto_H_


#include "../ModelBase.h"


namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  LinkRunToLogDto
    : public ModelBase
{
public:
    LinkRunToLogDto();
    virtual ~LinkRunToLogDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LinkRunToLogDto members

    /// <summary>
    /// The id of the run to link to the log.
    /// </summary>
    int32_t getRunNumber() const;
        void setRunNumber(int32_t value);

protected:
    int32_t m_RunNumber;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_LinkRunToLogDto_H_ */
