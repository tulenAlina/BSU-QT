/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWidgetENDCLASS = QtMocHelpers::stringData(
    "Widget",
    "eventFilter",
    "",
    "watched",
    "QEvent*",
    "event",
    "Names_For_LeftLabels",
    "text",
    "Names_For_CenterLabels",
    "Names_For_RightLabels",
    "changed_LeftFirst",
    "changed_LeftSecond",
    "changed_LeftThird",
    "changed_LeftFourth",
    "changed_CenterFirst",
    "changed_CenterSecond",
    "changed_CenterThird",
    "changed_CenterFourth",
    "changed_RightFirst",
    "changed_RightSecond",
    "changed_RightThird",
    "changed_RightFourth",
    "setTexteverywhere",
    "red_change",
    "green_change",
    "blue_change",
    "slidersChanged",
    "setSlider",
    "getPixelAt",
    "x",
    "y"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[7];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[6];
    char stringdata6[21];
    char stringdata7[5];
    char stringdata8[23];
    char stringdata9[22];
    char stringdata10[18];
    char stringdata11[19];
    char stringdata12[18];
    char stringdata13[19];
    char stringdata14[20];
    char stringdata15[21];
    char stringdata16[20];
    char stringdata17[21];
    char stringdata18[19];
    char stringdata19[20];
    char stringdata20[19];
    char stringdata21[20];
    char stringdata22[18];
    char stringdata23[11];
    char stringdata24[13];
    char stringdata25[12];
    char stringdata26[15];
    char stringdata27[10];
    char stringdata28[11];
    char stringdata29[2];
    char stringdata30[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWidgetENDCLASS_t qt_meta_stringdata_CLASSWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Widget"
        QT_MOC_LITERAL(7, 11),  // "eventFilter"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 7),  // "watched"
        QT_MOC_LITERAL(28, 7),  // "QEvent*"
        QT_MOC_LITERAL(36, 5),  // "event"
        QT_MOC_LITERAL(42, 20),  // "Names_For_LeftLabels"
        QT_MOC_LITERAL(63, 4),  // "text"
        QT_MOC_LITERAL(68, 22),  // "Names_For_CenterLabels"
        QT_MOC_LITERAL(91, 21),  // "Names_For_RightLabels"
        QT_MOC_LITERAL(113, 17),  // "changed_LeftFirst"
        QT_MOC_LITERAL(131, 18),  // "changed_LeftSecond"
        QT_MOC_LITERAL(150, 17),  // "changed_LeftThird"
        QT_MOC_LITERAL(168, 18),  // "changed_LeftFourth"
        QT_MOC_LITERAL(187, 19),  // "changed_CenterFirst"
        QT_MOC_LITERAL(207, 20),  // "changed_CenterSecond"
        QT_MOC_LITERAL(228, 19),  // "changed_CenterThird"
        QT_MOC_LITERAL(248, 20),  // "changed_CenterFourth"
        QT_MOC_LITERAL(269, 18),  // "changed_RightFirst"
        QT_MOC_LITERAL(288, 19),  // "changed_RightSecond"
        QT_MOC_LITERAL(308, 18),  // "changed_RightThird"
        QT_MOC_LITERAL(327, 19),  // "changed_RightFourth"
        QT_MOC_LITERAL(347, 17),  // "setTexteverywhere"
        QT_MOC_LITERAL(365, 10),  // "red_change"
        QT_MOC_LITERAL(376, 12),  // "green_change"
        QT_MOC_LITERAL(389, 11),  // "blue_change"
        QT_MOC_LITERAL(401, 14),  // "slidersChanged"
        QT_MOC_LITERAL(416, 9),  // "setSlider"
        QT_MOC_LITERAL(426, 10),  // "getPixelAt"
        QT_MOC_LITERAL(437, 1),  // "x"
        QT_MOC_LITERAL(439, 1)   // "y"
    },
    "Widget",
    "eventFilter",
    "",
    "watched",
    "QEvent*",
    "event",
    "Names_For_LeftLabels",
    "text",
    "Names_For_CenterLabels",
    "Names_For_RightLabels",
    "changed_LeftFirst",
    "changed_LeftSecond",
    "changed_LeftThird",
    "changed_LeftFourth",
    "changed_CenterFirst",
    "changed_CenterSecond",
    "changed_CenterThird",
    "changed_CenterFourth",
    "changed_RightFirst",
    "changed_RightSecond",
    "changed_RightThird",
    "changed_RightFourth",
    "setTexteverywhere",
    "red_change",
    "green_change",
    "blue_change",
    "slidersChanged",
    "setSlider",
    "getPixelAt",
    "x",
    "y"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  152,    2, 0x0a,    1 /* Public */,
       6,    1,  157,    2, 0x0a,    4 /* Public */,
       8,    1,  160,    2, 0x0a,    6 /* Public */,
       9,    1,  163,    2, 0x0a,    8 /* Public */,
      10,    0,  166,    2, 0x0a,   10 /* Public */,
      11,    0,  167,    2, 0x0a,   11 /* Public */,
      12,    0,  168,    2, 0x0a,   12 /* Public */,
      13,    0,  169,    2, 0x0a,   13 /* Public */,
      14,    0,  170,    2, 0x0a,   14 /* Public */,
      15,    0,  171,    2, 0x0a,   15 /* Public */,
      16,    0,  172,    2, 0x0a,   16 /* Public */,
      17,    0,  173,    2, 0x0a,   17 /* Public */,
      18,    0,  174,    2, 0x0a,   18 /* Public */,
      19,    0,  175,    2, 0x0a,   19 /* Public */,
      20,    0,  176,    2, 0x0a,   20 /* Public */,
      21,    0,  177,    2, 0x0a,   21 /* Public */,
      22,    0,  178,    2, 0x0a,   22 /* Public */,
      23,    0,  179,    2, 0x0a,   23 /* Public */,
      24,    0,  180,    2, 0x0a,   24 /* Public */,
      25,    0,  181,    2, 0x0a,   25 /* Public */,
      26,    0,  182,    2, 0x0a,   26 /* Public */,
      27,    0,  183,    2, 0x0a,   27 /* Public */,
      28,    2,  184,    2, 0x0a,   28 /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QColor, QMetaType::Int, QMetaType::Int,   29,   30,

       0        // eod
};

Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Widget, std::true_type>,
        // method 'eventFilter'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>,
        // method 'Names_For_LeftLabels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'Names_For_CenterLabels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'Names_For_RightLabels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'changed_LeftFirst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_LeftSecond'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_LeftThird'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_LeftFourth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_CenterFirst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_CenterSecond'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_CenterThird'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_CenterFourth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_RightFirst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_RightSecond'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_RightThird'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changed_RightFourth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTexteverywhere'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'red_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'green_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'blue_change'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slidersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSlider'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getPixelAt'
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->eventFilter((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->Names_For_LeftLabels((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->Names_For_CenterLabels((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->Names_For_RightLabels((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->changed_LeftFirst(); break;
        case 5: _t->changed_LeftSecond(); break;
        case 6: _t->changed_LeftThird(); break;
        case 7: _t->changed_LeftFourth(); break;
        case 8: _t->changed_CenterFirst(); break;
        case 9: _t->changed_CenterSecond(); break;
        case 10: _t->changed_CenterThird(); break;
        case 11: _t->changed_CenterFourth(); break;
        case 12: _t->changed_RightFirst(); break;
        case 13: _t->changed_RightSecond(); break;
        case 14: _t->changed_RightThird(); break;
        case 15: _t->changed_RightFourth(); break;
        case 16: _t->setTexteverywhere(); break;
        case 17: _t->red_change(); break;
        case 18: _t->green_change(); break;
        case 19: _t->blue_change(); break;
        case 20: _t->slidersChanged(); break;
        case 21: _t->setSlider(); break;
        case 22: { QColor _r = _t->getPixelAt((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
