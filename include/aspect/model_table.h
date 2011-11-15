//-------------------------------------------------------------
//    $Id$
//
//    Copyright (C) 2011 by the authors of the ASPECT code
//
//-------------------------------------------------------------
#ifndef __aspect__model_table_h
#define __aspect__model_table_h

#include <aspect/model_base.h>

namespace aspect
{
  using namespace dealii;

  template <int dim>
  class MaterialModel_Table: public MaterialModel<dim>
  {
    public:
      virtual double viscosity (const double temperature,
                                const double pressure,
                                const Point<dim> &position) const;

      virtual double specific_heat (const double temperature,
                                    const double pressure,
                                    const Point<dim> &position) const;

      virtual double density (const double temperature,
                              const double pressure,
                              const Point<dim> &position) const;

      virtual double compressibility (const double temperature,
                                      const double pressure,
                                      const Point<dim> &position) const;

      virtual bool is_compressible () const;
  };
}

#endif