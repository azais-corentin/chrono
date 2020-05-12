// =============================================================================
// PROJECT CHRONO - http://projectchrono.org
//
// Copyright (c) 2014 projectchrono.org
// All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be found
// in the LICENSE file at the top level of the distribution and at
// http://projectchrono.org/license-chrono.txt.
//
// =============================================================================
// Authors: Radu Serban
// =============================================================================
//
// Gator 2WD driveline model based on ChShaft objects.
//
// =============================================================================

#ifndef GATOR_DRIVELINE_2WD_H
#define GATOR_DRIVELINE_2WD_H

#include "chrono_vehicle/wheeled_vehicle/driveline/ChShaftsDriveline2WD.h"

#include "chrono_models/ChApiModels.h"

namespace chrono {
namespace vehicle {
namespace gator {

/// @addtogroup vehicle_models_gator
/// @{

/// Shafts-based 2-WD driveline for the Gator vehicle.
class CH_MODELS_API Gator_Driveline2WD : public ChShaftsDriveline2WD {
  public:
    Gator_Driveline2WD(const std::string& name);

    ~Gator_Driveline2WD() {}

    virtual double GetDriveshaftInertia() const override { return m_driveshaft_inertia; }
    virtual double GetDifferentialBoxInertia() const override { return m_differentialbox_inertia; }

    virtual double GetConicalGearRatio() const override { return m_conicalgear_ratio; }
    virtual double GetDifferentialRatio() const override { return m_differential_ratio; }

    virtual double GetAxleDifferentialLockingLimit() const override { return m_axle_differential_locking_limit; }

  private:
    // Shaft inertias.
    static const double m_driveshaft_inertia;
    static const double m_differentialbox_inertia;

    // Gear ratios.
    static const double m_conicalgear_ratio;
    static const double m_differential_ratio;

    // Differential locking torque limit.
    static const double m_axle_differential_locking_limit;
};

/// @} vehicle_models_gator

}  // end namespace gator
}  // end namespace vehicle
}  // end namespace chrono

#endif
