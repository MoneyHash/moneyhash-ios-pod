//
//  ViewController.swift
//  MoneyHashPayment
//
//  Created by ahmedsalemelzeiny on 11/27/2022.
//  Copyright (c) 2022 ahmedsalemelzeiny. All rights reserved.
//

import UIKit
import MoneyHash

class ViewController: UIViewController {
        
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        DispatchQueue.main.async {
            MHPaymentHandler.startPaymentFlow(on: self,
                                              withPaymentId: "VLrp2Z7", completionHandler: { status in
                switch status {
                case .success(let result):
                    fallthrough
                    
                case .requireExtraAction(_, let result):
                    fallthrough
                    
                case .failed(let result):
                    fallthrough
                    
                case .error:
                    fallthrough
                    
                case .cancelled:
                    fallthrough
                    
                default:
                    print(String(describing: status))
                }
            })
        }
    }
}

