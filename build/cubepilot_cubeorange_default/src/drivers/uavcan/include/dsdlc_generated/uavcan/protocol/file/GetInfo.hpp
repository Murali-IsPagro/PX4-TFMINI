/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/murali/Documents/PX4-Autopilot/src/drivers/uavcan/libuavcan/dsdl/uavcan/protocol/file/45.GetInfo.uavcan
 */

#ifndef UAVCAN_PROTOCOL_FILE_GETINFO_HPP_INCLUDED
#define UAVCAN_PROTOCOL_FILE_GETINFO_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan/protocol/file/EntryType.hpp>
#include <uavcan/protocol/file/Error.hpp>
#include <uavcan/protocol/file/Path.hpp>

/******************************* Source text **********************************
#
# Request info about a remote file system entry (file, directory, etc).
#

Path path

---

#
# File size in bytes.
# Should be set to zero for directories.
#
uint40 size

Error error

EntryType entry_type
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.file.GetInfo
uavcan.protocol.file.Path path
---
saturated uint40 size
uavcan.protocol.file.Error error
uavcan.protocol.file.EntryType entry_type
******************************************************************************/

#undef path
#undef size
#undef error
#undef entry_type

namespace uavcan
{
namespace protocol
{
namespace file
{

struct UAVCAN_EXPORT GetInfo_
{
    template <int _tmpl>
    struct Request_
    {
        typedef const Request_<_tmpl>& ParameterType;
        typedef Request_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::protocol::file::Path path;
        };

        enum
        {
            MinBitLen
                = FieldTypes::path::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::path::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::path >::Type path;

        Request_()
            : path()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<1608 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    template <int _tmpl>
    struct Response_
    {
        typedef const Response_<_tmpl>& ParameterType;
        typedef Response_<_tmpl>& ReferenceType;

        struct ConstantTypes
        {
        };

        struct FieldTypes
        {
            typedef ::uavcan::IntegerSpec< 40, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > size;
            typedef ::uavcan::protocol::file::Error error;
            typedef ::uavcan::protocol::file::EntryType entry_type;
        };

        enum
        {
            MinBitLen
                = FieldTypes::size::MinBitLen
                + FieldTypes::error::MinBitLen
                + FieldTypes::entry_type::MinBitLen
        };

        enum
        {
            MaxBitLen
                = FieldTypes::size::MaxBitLen
                + FieldTypes::error::MaxBitLen
                + FieldTypes::entry_type::MaxBitLen
        };

        // Constants

        // Fields
        typename ::uavcan::StorageType< typename FieldTypes::size >::Type size;
        typename ::uavcan::StorageType< typename FieldTypes::error >::Type error;
        typename ::uavcan::StorageType< typename FieldTypes::entry_type >::Type entry_type;

        Response_()
            : size()
            , error()
            , entry_type()
        {
            ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

    #if UAVCAN_DEBUG
            /*
             * Cross-checking MaxBitLen provided by the DSDL compiler.
             * This check shall never be performed in user code because MaxBitLen value
             * actually depends on the nested types, thus it is not invariant.
             */
            ::uavcan::StaticAssert<64 == MaxBitLen>::check();
    #endif
        }

        bool operator==(ParameterType rhs) const;
        bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

        /**
         * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
         * floating point fields at any depth.
         */
        bool isClose(ParameterType rhs) const;

        static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

        static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                          ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    };

    typedef Request_<0> Request;
    typedef Response_<0> Response;

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindService };
    enum { DefaultDataTypeID = 45 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.file.GetInfo";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

private:
    GetInfo_(); // Don't create objects of this type. Use Request/Response instead.
};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool GetInfo_::Request_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        path == rhs.path;
}

template <int _tmpl>
bool GetInfo_::Request_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(path, rhs.path);
}

template <int _tmpl>
int GetInfo_::Request_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::path::encode(self.path, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int GetInfo_::Request_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::path::decode(self.path, codec,  tao_mode);
    return res;
}

template <int _tmpl>
bool GetInfo_::Response_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        size == rhs.size &&
        error == rhs.error &&
        entry_type == rhs.entry_type;
}

template <int _tmpl>
bool GetInfo_::Response_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(size, rhs.size) &&
        ::uavcan::areClose(error, rhs.error) &&
        ::uavcan::areClose(entry_type, rhs.entry_type);
}

template <int _tmpl>
int GetInfo_::Response_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::size::encode(self.size, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::error::encode(self.error, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::entry_type::encode(self.entry_type, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int GetInfo_::Response_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::size::decode(self.size, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::error::decode(self.error, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::entry_type::decode(self.entry_type, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
inline ::uavcan::DataTypeSignature GetInfo_::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xCFBBC571F4FDB19EULL);

    Request::FieldTypes::path::extendDataTypeSignature(signature);

    Response::FieldTypes::size::extendDataTypeSignature(signature);
    Response::FieldTypes::error::extendDataTypeSignature(signature);
    Response::FieldTypes::entry_type::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef GetInfo_ GetInfo;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::file::GetInfo > _uavcan_gdtr_registrator_GetInfo;

}

} // Namespace file
} // Namespace protocol
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::file::GetInfo::Request >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::file::GetInfo::Request::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::file::GetInfo::Request >::stream(Stream& s, ::uavcan::protocol::file::GetInfo::Request::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "path: ";
    YamlStreamer< ::uavcan::protocol::file::GetInfo::Request::FieldTypes::path >::stream(s, obj.path, level + 1);
}

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::file::GetInfo::Response >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::file::GetInfo::Response::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::file::GetInfo::Response >::stream(Stream& s, ::uavcan::protocol::file::GetInfo::Response::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "size: ";
    YamlStreamer< ::uavcan::protocol::file::GetInfo::Response::FieldTypes::size >::stream(s, obj.size, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "error: ";
    YamlStreamer< ::uavcan::protocol::file::GetInfo::Response::FieldTypes::error >::stream(s, obj.error, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "entry_type: ";
    YamlStreamer< ::uavcan::protocol::file::GetInfo::Response::FieldTypes::entry_type >::stream(s, obj.entry_type, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace file
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::file::GetInfo::Request::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::file::GetInfo::Request >::stream(s, obj, 0);
    return s;
}

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::file::GetInfo::Response::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::file::GetInfo::Response >::stream(s, obj, 0);
    return s;
}

} // Namespace file
} // Namespace protocol
} // Namespace uavcan

#endif // UAVCAN_PROTOCOL_FILE_GETINFO_HPP_INCLUDED