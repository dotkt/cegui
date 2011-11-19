// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "LayerSpecification.pypp.hpp"

namespace bp = boost::python;

void register_LayerSpecification_class(){

    { //::CEGUI::LayerSpecification
        typedef bp::class_< CEGUI::LayerSpecification > LayerSpecification_exposer_t;
        LayerSpecification_exposer_t LayerSpecification_exposer = LayerSpecification_exposer_t( "LayerSpecification", "*!\n\
        \n\
            Class that encapsulates a single layer of imagery.\n\
        *\n", bp::init< CEGUI::uint >(( bp::arg("priority") ), "*!\n\
                \n\
                    Constructor.\n\
        \n\
                @param priority\n\
                    Specifies the priority of the layer.  Layers with higher priorities will be drawn on\
                    top\n\
                    of layers with lower priorities.\n\
                *\n") );
        bp::scope LayerSpecification_scope( LayerSpecification_exposer );
        bp::implicitly_convertible< CEGUI::uint, CEGUI::LayerSpecification >();
        { //::CEGUI::LayerSpecification::addSectionSpecification
        
            typedef void ( ::CEGUI::LayerSpecification::*addSectionSpecification_function_type )( ::CEGUI::SectionSpecification const & ) ;
            
            LayerSpecification_exposer.def( 
                "addSectionSpecification"
                , addSectionSpecification_function_type( &::CEGUI::LayerSpecification::addSectionSpecification )
                , ( bp::arg("section") )
                , "*!\n\
                    \n\
                        Add a section specification to the layer.\n\
            \n\
                        A section specification is a reference to a named ImagerySection within the\
                        WidgetLook.\n\
            \n\
                    @param section\n\
                        SectionSpecification object descibing the section that should be added to this layer.\n\
            \n\
                    @return\n\
                        Nothing,\n\
                    *\n" );
        
        }
        { //::CEGUI::LayerSpecification::clearSectionSpecifications
        
            typedef void ( ::CEGUI::LayerSpecification::*clearSectionSpecifications_function_type )(  ) ;
            
            LayerSpecification_exposer.def( 
                "clearSectionSpecifications"
                , clearSectionSpecifications_function_type( &::CEGUI::LayerSpecification::clearSectionSpecifications )
                , "*!\n\
                    \n\
                        Clear all section specifications from this layer,\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::LayerSpecification::getLayerPriority
        
            typedef ::CEGUI::uint ( ::CEGUI::LayerSpecification::*getLayerPriority_function_type )(  ) const;
            
            LayerSpecification_exposer.def( 
                "getLayerPriority"
                , getLayerPriority_function_type( &::CEGUI::LayerSpecification::getLayerPriority )
                , "*!\n\
                    \n\
                        Return the priority of this layer.\n\
            \n\
                    @return\n\
                        uint value descibing the priority of this LayerSpecification.\n\
                    *\n" );
        
        }
        LayerSpecification_exposer.def( bp::self < bp::self );
        { //::CEGUI::LayerSpecification::render
        
            typedef void ( ::CEGUI::LayerSpecification::*render_function_type )( ::CEGUI::Window &,::CEGUI::ColourRect const *,::CEGUI::Rect const *,bool ) const;
            
            LayerSpecification_exposer.def( 
                "render"
                , render_function_type( &::CEGUI::LayerSpecification::render )
                , ( bp::arg("srcWindow"), bp::arg("modcols")=bp::object(), bp::arg("clipper")=bp::object(), bp::arg("clipToDisplay")=(bool)(false) )
                , "*!\n\
                    \n\
                        Render this layer.\n\
            \n\
                    @param srcWindow\n\
                        Window to use when calculating pixel values from BaseDim values.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::LayerSpecification::render
        
            typedef void ( ::CEGUI::LayerSpecification::*render_function_type )( ::CEGUI::Window &,::CEGUI::Rect const &,::CEGUI::ColourRect const *,::CEGUI::Rect const *,bool ) const;
            
            LayerSpecification_exposer.def( 
                "render"
                , render_function_type( &::CEGUI::LayerSpecification::render )
                , ( bp::arg("srcWindow"), bp::arg("baseRect"), bp::arg("modcols")=bp::object(), bp::arg("clipper")=bp::object(), bp::arg("clipToDisplay")=(bool)(false) )
                , "*!\n\
                    \n\
                        Render this layer.\n\
            \n\
                    @param srcWindow\n\
                        Window to use when calculating pixel values from BaseDim values.\n\
            \n\
                    @param baseRect\n\
                        Rect to use when calculating pixel values from BaseDim values.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::LayerSpecification::writeXMLToStream
        
            typedef void ( ::CEGUI::LayerSpecification::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            LayerSpecification_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type( &::CEGUI::LayerSpecification::writeXMLToStream )
                , ( bp::arg("xml_stream") )
                , "*!\n\
                    \n\
                        Writes an xml representation of this Layer to  out_stream.\n\
            \n\
                    @param xml_stream\n\
                        Stream where xml data should be output.\n\
            \n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
    }

}