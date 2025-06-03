/****************************************************************************
** Meta object code from reading C++ file 'measurementdata.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../measurementdata.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'measurementdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN15MeasurementDataE_t {};
} // unnamed namespace

template <> constexpr inline auto MeasurementData::qt_create_metaobjectdata<qt_meta_tag_ZN15MeasurementDataE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MeasurementData",
        "frequency",
        "s11_real",
        "s11_imag",
        "s11_logmag"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'frequency'
        QtMocHelpers::PropertyData<double>(1, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 's11_real'
        QtMocHelpers::PropertyData<double>(2, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 's11_imag'
        QtMocHelpers::PropertyData<double>(3, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 's11_logmag'
        QtMocHelpers::PropertyData<double>(4, QMetaType::Double, QMC::DefaultPropertyFlags | QMC::Writable),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MeasurementData, qt_meta_tag_ZN15MeasurementDataE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MeasurementData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MeasurementDataE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MeasurementDataE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15MeasurementDataE_t>.metaTypes,
    nullptr
} };

void MeasurementData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MeasurementData *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<double*>(_v) = _t->frequency(); break;
        case 1: *reinterpret_cast<double*>(_v) = _t->s11Real(); break;
        case 2: *reinterpret_cast<double*>(_v) = _t->s11Imag(); break;
        case 3: *reinterpret_cast<double*>(_v) = _t->s11Logmag(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrequency(*reinterpret_cast<double*>(_v)); break;
        case 1: _t->setS11Real(*reinterpret_cast<double*>(_v)); break;
        case 2: _t->setS11Imag(*reinterpret_cast<double*>(_v)); break;
        case 3: _t->setS11Logmag(*reinterpret_cast<double*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *MeasurementData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeasurementData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15MeasurementDataE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MeasurementData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN10FileParserE_t {};
} // unnamed namespace

template <> constexpr inline auto FileParser::qt_create_metaobjectdata<qt_meta_tag_ZN10FileParserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FileParser",
        "parseFile",
        "QVariantList",
        "",
        "filePath"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'parseFile'
        QtMocHelpers::MethodData<QVariantList(const QString &)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileParser, qt_meta_tag_ZN10FileParserE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FileParser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FileParserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FileParserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10FileParserE_t>.metaTypes,
    nullptr
} };

void FileParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FileParser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QVariantList _r = _t->parseFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *FileParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileParser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FileParserE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN13DataProcessorE_t {};
} // unnamed namespace

template <> constexpr inline auto DataProcessor::qt_create_metaobjectdata<qt_meta_tag_ZN13DataProcessorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DataProcessor",
        "processData",
        "QVariantList",
        "",
        "data"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'processData'
        QtMocHelpers::MethodData<QVariantList(const QVariantList &)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { 0x80000000 | 2, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DataProcessor, qt_meta_tag_ZN13DataProcessorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DataProcessor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DataProcessorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DataProcessorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13DataProcessorE_t>.metaTypes,
    nullptr
} };

void DataProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DataProcessor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QVariantList _r = _t->processData((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *DataProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13DataProcessorE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
